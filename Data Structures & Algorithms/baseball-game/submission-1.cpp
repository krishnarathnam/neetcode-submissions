class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> sc;

        for(auto op: operations){
            if(op == "D"){
                if(sc.empty()) continue;
                sc.push(sc.top() * 2);
            }
            else if(op == "C"){
                if(!sc.empty()) sc.pop();
            }
            else if(op == "+"){
                if(sc.empty()) continue;
                int a = sc.top();
                sc.pop();
                int b = sc.top();
                sc.push(a);
                sc.push(a+b);
            }
            else{
                sc.push(stoi(op));
            }
        }

        int sum =0;
        while(!sc.empty()){
            cout << sc.top() << " ";
            sum+=sc.top();
            sc.pop();
        }

        return sum;
    }
};