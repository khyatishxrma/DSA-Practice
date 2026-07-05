//1572 matrix diagonal sum
class Solution {
    public int diagonalSum(int[][] mat) {
        int n=mat.length,s=0;
        for(int i=0;i<n;i++){
            s+=mat[i][i];
            s+=mat[i][n-i-1];
        }
        if(n%2==1){
            s-=mat[n/2][n/2];
        }
        return s;
    }
}
