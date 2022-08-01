#include<bits/stdc++.h>
using namespace std;


int main(){
int row,col;
cin>>row>>col;

int arr[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
int visit[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(visit[i][j]!= 1){
            for(int x=0;x<row;x++){
                for(int y=0;y<col;y++) {
              if((i == x)&&(j == y)) {
                continue;
              }
              if(arr[i][j]==arr[x][y]) {
                arr[x][y] = -1;
              }
            }
        }

    }
}
}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}

