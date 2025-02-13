public class pyramid {
    public static void main(String[]args){
        int i;
        int j;
        int k=1;
        int n=5;
        for(i=1;i<=n;i++){
            System.out.println(" ");
            for(j=n-i;j>=1;j--){
                System.out.print(" ");
            }
            for(k=1;k<=i;k++){
                System.out.print("1");
            }
            System.out.println();
            for(i=1;i<=n;i++){
                System.out.println(" ");
                for(j=1;j<=i;j++){
                    System.out.print('1');
                }
            }
        }
    }

}

