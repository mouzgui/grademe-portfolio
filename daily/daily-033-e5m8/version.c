int mail_flows(int yy, int mm, int dd, int hh, int mn)
{
    long long v;

    v = ((((long long)yy * 100 + mm) * 100 + dd) * 100 + hh) * 100 + mn;
    return (v <= 2147483647);
}