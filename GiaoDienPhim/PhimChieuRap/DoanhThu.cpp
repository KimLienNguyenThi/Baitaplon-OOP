#include "DoanhThu.h"
#include "Store.h"

void ManagementCinema::DoanhThu::GetDoanhthu(DateTime^ tungay, DateTime^ denngay)
{
    Store^ s = gcnew Store();
    dataDoanhThu = s->GetDoanhThu( tungay,denngay );
    dataGvDoanhThu->DataSource = dataDoanhThu;
}
