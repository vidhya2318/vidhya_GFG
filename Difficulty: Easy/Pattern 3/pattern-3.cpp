class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = 1;j <= i;j++){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
};