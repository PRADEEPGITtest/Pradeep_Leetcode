class Solution {
public:
    string getSmallestString(string s) {
        string dup=s;

        int temp1;
        int temp2;


        for(int i=0;i<s.size()-1;i++)
        {
            temp1= dup[i]-'0';
            temp2= dup[i+1]-'0';

            if( temp1 %2!=0 && temp2 %2!=0 )
            {
                if(temp1>temp2){
                    swap(dup[i], dup[i+1]);
                    break;
                }
               
            }
            else if(temp1 %2==0 && temp2 %2==0)
            {
                if(temp1>temp2)
                {
                    swap(dup[i], dup[i+1]);
                    break;
                }
            }
           
        }

        if(dup>s) return s;
        else return dup;

    }
};