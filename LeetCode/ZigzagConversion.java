class Solution {
    public String convert(String s, int skip) {
     if(skip==1||skip>=s.length())return s;
        StringBuilder str=new StringBuilder();
        int l=0;int num=skip*2-2;int gap=num;int gap2=0;
        while(skip-->0)
        {   int i=l;
        boolean flag=true;
            
            while(i<s.length())
                {
                str.append(s.charAt(i));
                if(flag==true&&gap!=0||gap2==0)
                {
                    i=i+gap;
                    flag=false;
                }
                else if(flag==false||gap==0)
                {
                    i=i+gap2;
                    flag=true;
                }
                }
            l++;
            gap=gap-2;
            gap2=gap2+2;
            
        }
        return str.toString();
    }
}
