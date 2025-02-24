class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long sum=0;
        vector<long long> temp;
        // for(int i=0;i<num-2;i++)
        // {
        //     if((i)+(i+1)+(i+2) == num)
        //     {
        //         temp.push_back(i);
        //         temp.push_back(i+1);
        //         temp.push_back(i+2);
        //     }
        // }
        // return temp;

        // my approach

        // if(num%3 ==0)
        // {
        //     temp.push_back((num/3)-1);
        //     temp.push_back((num/3));
        //     temp.push_back((num/3)+1);
        // }
        // return temp;

        // karmugilan approach [friend]

        /*[n+(n+1)+(n+2)] == num;
            3+3n  == num
            n = (num/3)-1

        */
        long long n=(num/3)-1;
        if(num % 3 ==0)
        {
        temp.push_back(n);
        temp.push_back(n+1);
        temp.push_back(n+2);
        }
        return temp;
    }
};