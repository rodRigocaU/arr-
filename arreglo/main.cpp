#include <iostream>

using namespace std;
int le (char *cad)
{
    int n = 0;
    for(int i = 0; cad[i] != 0 ; i++)
    {
       n++;
    }
    return n;
}
bool palindrome(char *arr, int l)
{
    int pal = 0;
    int y = (l - 1);
    for(int x = 0; x < (l/2); x++)
    {
        if(arr[x] == arr[y])
            {
                pal ++;
            }
        y--;
        if(pal == (l/2))
        {
            return true;
        }
    }

    return 0;

}
int re(char *arr, int l, char a)
{
    int cont = 0;
    for(int x = 0; x < l; x++)
    {
        if(arr[x] == a)
            cont = cont + 1;
    }
    return cont;
}
bool palrecur(char *arr, int l)
{
    int pal = 0;
    int y = (l - 1);
    for(int x = 0; x < (l/2); x++)
    {
        if(arr[x] == arr[y])
            {
                pal ++;
            }
        y--;
        if(pal == (l/2))
        {
            return true;
        }
    }
    return 0;

}
char may(char *arr, int l)
{
    int y;
    char u;
    char r;
    for(int x = 0; x < l; x++)
    {
        y = 0;
        r = arr[x];
        y  = static_cast<int>(r);
        y = y - 32;
        u = static_cast<char>(y);
        arr[x] = u;
        cout << arr[x] <<'\t';
    }

}
int main()
{
    char arr[] = {"holaaloh"};
    int l = (le(arr));
    //cout << (palindrome(arr, l)) << '\n';
    //cout << re(arr,l,'a');
    may(arr, l);
    return 0;
}
