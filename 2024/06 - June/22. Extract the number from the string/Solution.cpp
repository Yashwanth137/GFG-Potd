class Solution {
 public:
 long long ExtractNumber(string sentence) {
     int n = sentence.size();
     stringstream ss(sentence);
     string word;
     long long int maxi = -1;
     while(ss >> word){
         if(word[0]>='1' && word[word.size() - 1] <='8'){
             bool c = 0;
             for(int i = 0;i < word.size(); i++){
                 if(word[i] == '9') c = 1;
             }
             if(!c) {
                 long long d = stoll(word);
                 if(d > maxi) maxi = d;
             }
           }
     }
     return maxi;
     
 }
};
