class Solution {
public:
    int myAtoi(string str) {
        long result=0;  
        int multiplier=1;
        int x = str.find_first_not_of(' ');

        for (; x<str.length(); x++){
            
            if (str[x] == '-') {
                multiplier *= -1;
            } else if (str[x] == '+'){
                multiplier *= 1;
            }
             else if (str[x] >= '0' and str[x] <= '9'){
                break;
            } else {
                 return 0;
            }
        }
        
        for (int y=x; y<str.length(); y++){

            if (str[y] >= '0' and str[y] <= '9'){
                result = result*10 + (str[y] - '0') * multiplier;
                
                if (result > INT_MAX) result = INT_MAX;
                if (result < INT_MIN) result = INT_MIN;

            } else {
                break;
            }
            
            
        }
                
        return result;
    }
};