//09-00 等额本息的还款计算器
#include <stdio.h>
#include<math.h>
int main()
{
	// 单价 面积 年利率 月利率
	float price, area, yir, mir; 
	// 利息 贷款总额
	float interest, loan;
	// 月均还款 首期还款
	float ave_repay, down_payment;
	// 房款总额， 还款总额
	float total_price, total_repay;
	// 按揭成数 按揭年数
	int ratio, time;
	
	// 请求用户输入
	printf("请输入单价（元/平方）：");
	scanf("%f", &price);
	
	printf("请输入面积：");
	scanf("%f", &area);
	
	printf("请输入按揭成数：");
	scanf("%d", &ratio);
	
	printf("请输入按揭年数：");
	scanf("%d", &time);
	
	printf("请输入当前基准年利率：");
	scanf("%f",&yir);
	
	
	// 计算所需要的数据
	total_price = price * area;  // 房款总额
	down_payment = total_price * (10 - ratio) / 10.0;  // 首付款等房款总额减去贷款的（ 按揭的总数）
	loan = total_price * (7 / 10.0);  // 贷款总额
	mir = yir / 100.0 / 12.0;  // 月均利率 
	ave_repay = loan * (mir * pow((1 + mir), (time * 12))) / (pow((1 + mir),(time * 12))-1);
	interest = (time * 12) * ave_repay - loan;  // 总利息
	total_repay = loan + interest;  // 还款总额
	
	
	// 输出结果
	printf("======报告结果======\n");
	printf("房款总额：%.2f元\n", total_price);
	printf("首期付款：%.2f元\n", down_payment);
	printf("贷款总额：%.2f元\n", loan);
	printf("还款总额：%.2f元\n", total_repay);
	printf("支付利息：%.2f元\n", interest);
	printf("月均还款：%.2f元\n", ave_repay);
	
	
	
	return 0;
}

