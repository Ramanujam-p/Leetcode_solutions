class Spreadsheet {
    private:
    unordered_map<string,int> m;
public:
    Spreadsheet(int rows) {
        
    }
    
    void setCell(string cell, int value) {
        m[cell] = value;
    }
    
    void resetCell(string cell) {
        m.erase(cell);
    }
    
    int getValue(string formula) {
        if(formula.size()==0 || formula[0]!='=') return 0;
        string a = formula.substr(1);
        int r = 0;
        stringstream b(a);
        string c;
        while(getline(b,c,'+'))
        {
            if(c.empty()) continue;
            if(isdigit(c[0])) r+=stoi(c);
            else
            {
                auto d = m.find(c);
                if(d != m.end()) r += d->second;
                else r+=0;
            }
        }
        return r;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */