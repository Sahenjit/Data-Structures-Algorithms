#include <iostream>
#include <string>


void swap(char &x,char &y)
{
    char temp= x;
    x=y;
    y=temp;
}


void permute(std::string s,int l,int r)
{
    if(l==r)
    {
        std::cout<<s<<std::endl;
    }


    for (int i=l;i<r;i++)
   {
       swap(s[l],s[i]);
       permute(s,l+1,r);
       swap(s[l],s[i]);
   }

}

bool is_permutation(std::string s,std::string s1)
{
    int i=0;
            permute(s,i,s.size());

}



int main()
{
    std::string text={"ABC"};
    std::string perm={"BAC"};
    is_permutation(text,perm);

}
