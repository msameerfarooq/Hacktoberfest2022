public class Selection_sort {
    public static void main(String[] args) {
        int []a={4,1,7,9,456,864,3};
        for(int i=0;i<a.length-1;i++){
            int min=i;
            for (int j=i+1;j<a.length;j++){
                if(a[min]>a[j]){
                   min=j;
                }
            }
            int t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
        for (int i:a){
            System.out.print(i+" ");
        }
    }
}
