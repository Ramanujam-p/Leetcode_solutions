class Solution {
public:
    long long solve(vector<int>& start, vector<int>& dur,
                    vector<int>& otherStart, vector<int>& otherDur) {

        int m = otherStart.size();

        vector<pair<long long, long long>> rides;
        for (int i = 0; i < m; i++) {
            rides.push_back({otherStart[i], otherDur[i]});
        }

        sort(rides.begin(), rides.end());

        vector<long long> starts(m);

        // prefix minimum duration
        vector<long long> prefMinDur(m);

        // suffix minimum (start + duration)
        vector<long long> suffMinFinish(m);

        for (int i = 0; i < m; i++) {
            starts[i] = rides[i].first;
        }

        prefMinDur[0] = rides[0].second;
        for (int i = 1; i < m; i++) {
            prefMinDur[i] = min(prefMinDur[i - 1], rides[i].second);
        }

        suffMinFinish[m - 1] = rides[m - 1].first + rides[m - 1].second;
        for (int i = m - 2; i >= 0; i--) {
            suffMinFinish[i] =
                min(suffMinFinish[i + 1],
                    rides[i].first + rides[i].second);
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < start.size(); i++) {

            long long finishTime =
                (long long)start[i] + dur[i];

            int pos =
                upper_bound(starts.begin(),
                            starts.end(),
                            finishTime)
                - starts.begin();

            // rides with start <= finishTime
            if (pos > 0) {
                ans = min(ans,
                          finishTime + prefMinDur[pos - 1]);
            }

            // rides with start > finishTime
            if (pos < m) {
                ans = min(ans,
                          suffMinFinish[pos]);
            }
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        long long ans = LLONG_MAX;

        // Land -> Water
        ans = min(ans,
                  solve(landStartTime,
                        landDuration,
                        waterStartTime,
                        waterDuration));

        // Water -> Land
        ans = min(ans,
                  solve(waterStartTime,
                        waterDuration,
                        landStartTime,
                        landDuration));

        return (int)ans;
    }
};