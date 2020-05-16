class main
{
    int a,b,c;
    void getdata(final int x,final int y)
    {
        a=x;
        b=y;
    }
    void add()
    {
        c=a+b;
        System.out.print("addition is "+ c);
    }
}
public class test
{
    public static void main(String [] args)
    {
        main obj =new main();
        obj.getdata(100,200);
        obj.add();
    }
}