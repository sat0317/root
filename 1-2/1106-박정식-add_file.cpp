//    Copyright (c) 2020. ParkJeongSik.
//    Permission is hereby granted, free of charge, to any person
//    obtaining a copy of this software and associated documentation
//    files (the "Software"), to deal in the Software without
//    restriction, including without limitation the rights to use,
//    copy, modify, merge, publish, distribute, sublicense, and/or sell
//    copies of the Software, and to permit persons to whom the
//    Software is furnished to do so, subject to the following
//    conditions:
//    The above copyright notice and this permission notice shall be
//    included in all copies or substantial portions of the Software.
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//    OTHER DEALINGS IN THE SOFTWARE.

#include <stdio.h>
int main(){
    int a, b;
    FILE *f1, *f2;
    f1=fopen("input.txt", "r");
    f2=fopen("output.csv", "w");
    
    if(f1==NULL||f2==NULL) {
        printf("error");
        return 1;
    }
    
    fscanf(f1, "%d %d", &a, &b);
    fprintf(f2, "%d ,+,%d ,=,%d ", a, b, a+b);
    
    fclose(f1);
    fclose(f2);
    
    return 0;
}
