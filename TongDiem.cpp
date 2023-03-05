#include<stdio.h>
#include<conio.h>
#include<math.h>

struct ThiSinh
{ 
    int MaTS[5];
    char HoTenTS[30];
    float Toan, Ly, Hoa;
    float TongDiem;
};

typedef struct ThiSinh TS;
void NhapThiSinh(TS &t)

{
    printf (" Nhap MaTS:\n");
    scanf ("%d", &t.MaTS);

    fflush(stdin);
    printf (" Nhap HoTenTS:\n");
    scanf (t.HoTenTS);

    printf (" Nhap Toan:\n");
    scanf ("%f", &Toan);

    printf (" Nhap Ly:\n");
    scanf ("%f", &Ly);

    printf (" Nhap Hoa:\n");
    scanf ("%f", &Hoa);

}
void XuatThiSinh(TS t)
{
    printf("MaTS: %d\n", t.MaTS);
    printf("HoTenTS: %s\n," t.HoTenTS);
    printf("DiemToan: %f\n", t.Toan);
    printf("DiemLy: %f\n", t.Ly);
    printf("DiemHoa: %f\n", t.Hoa);
    printf("TongDiem:%.3f(TD=Toan+Ly+Hoa)\n", t.TongDiem);
}
int main
{
    TS t1;
    NhapTS(t1);
    XuatTS(t1);

    getch();
    return 0;
}
   

