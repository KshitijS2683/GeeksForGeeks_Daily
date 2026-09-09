class Complete {
    public static ArrayList<Integer> array(int a[][], int b[], int n) {
        // Complete the function
        Integer sum = 0;
        ArrayList<Integer> out = new ArrayList<Integer>();
        for(int i = 0;i<n;i++)
        {
            sum += a[i][i];
        }
        out.add(sum);
        int ans = -1;
        for(int i = 0;i<n;i++)
        {
            ans = Math.max(ans,b[i]);
        }
        out.add(ans);
        return out;
    }
}
