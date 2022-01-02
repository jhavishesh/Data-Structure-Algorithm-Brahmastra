/* https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1# */



//Solution:

vector<int> factorial(int N){
        
        
        vector <int> res;   
                                    //storing the result in vector cuz we can't store in any data-type of 100! like value.
        int car=0; 
                                  // we multiply in vector and storing and adding with carry part.
        
        res.push_back(1);       // Pushing 1 cux it is the smallest factorial value
        
        for(int x=2;x<=N;x++)    // traversing till N
        {
            for(int i=0;i<res.size();i++)       // traversing from back of vector 
            {
                int val = res[i]*x+car;               //Multiply and addition of carry is done
                res[i]=val%10;                           //carry for the one digit
                car=val/10;                                 // seprating carry greatar than 10
            }
            
            while(car!=0)          
            {
                res.push_back(car%10);    //adding the carry part
                car=car/10;
                
            }
        }
        reverse(res.begin(),res.end());  //result store in vector in reverse as we have multiplied in reverse order so we need to reverse the result.
        return res;
        
    }
