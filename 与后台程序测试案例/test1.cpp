#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    FILE *fp_in = fopen("test1_in", "r");
    FILE *fp_out = fopen("test1_out", "w");
    vector<int> a;
    int b = 0;
    fscanf(fp_in, "%d", &b);
    while (fscanf(fp_in, "%d", &b) == 1)
    {
        a.push_back(b);
    }
    sort(a.begin(), a.end());
    for (auto p = a.begin(); p != a.end(); p++)
    {
        fprintf(fp_out, "%d\n", *p);
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}