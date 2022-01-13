/*   https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1#  */


// Solution:

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
       
       vector <int> v; //transformtion of 2d in 1d array
       
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               
             v.push_back(Mat[i][j]);  // push_back all the elements in vector and sort them
           }
       }
       
       sort(v.begin(),v.end()); //sort the elememts
       
       int index=0;
        
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               
            Mat[i][j]=v[index];  //again push_back of vector in Matrix here index will be run till N*N times
            k++;
           }
       }
       
       return Mat;
    }
