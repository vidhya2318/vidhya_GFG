class Solution {
  public:

    void printTriangle(int n) {
        for(int i = n;i >= 1;i--){
            for(int j = 1;j <= i;j++){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
};