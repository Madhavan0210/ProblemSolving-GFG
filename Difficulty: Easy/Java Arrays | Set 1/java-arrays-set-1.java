
class Solution {
    public String average(int arr[]) {
        // code here
         double sum =0;
         int N = arr.length;
        for(int i=0; i<N; i++){
            sum=sum+arr[i];
        }
        
        double avg =sum/N;
        
         return String.format("%.2f",avg);
        
    }
}