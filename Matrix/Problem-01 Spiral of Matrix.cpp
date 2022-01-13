/* https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#  */


//Solution:

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        
        
       vector<int> ans; //to store the resultant matrix
       
      int dir=0;    // for the direction of movement
      int left=0,right=c-1,top=0,down=r-1;  // cstands for column and r stands for row 
       while(left<=right&&top<=down){  //to avoid out of bound index
           if(dir==0){    //for first row
               for(int i=left;i<=right;i++)
               ans.push_back(matrix[top][i]);
               top+=1;
           }
           else if(dir==1){   //top to bottom
               for(int i=top;i<=down;i++)
               ans.push_back(matrix[i][right]);
               right-=1;
           }
           else if(dir==2){   //from last row right to left
               for(int i=right;i>=left;i--)
               ans.push_back(matrix[down][i]);
               down-=1;
           }
           else if(dir==3){      //from last row bottom to top
               for(int i=down;i>=top;i--)
                   ans.push_back(matrix[i][left]);
                   left+=1;
           }
           dir=(dir+1)%4; // to determine the direction of movement 
       }
       return ans;  //return the resultant spiral form of matrix
   }
 
