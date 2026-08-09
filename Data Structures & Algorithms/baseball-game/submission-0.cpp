class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> sc;

        for(auto op: operations){
            if(op == "D"){
                if(sc.empty()) continue;
                int a = sc.top();
                sc.pop();
                int c = a * 2;
                sc.push(a);
                sc.push(c);
            }
            else if(op == "C"){
                sc.pop();
            }
            else if(op == "+"){
                if(sc.empty()) continue;
                int a = sc.top();
                sc.pop();
                int b = sc.top();
                sc.pop();
                int c = a + b;
                sc.push(a);
                sc.push(b);
                sc.push(c);
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