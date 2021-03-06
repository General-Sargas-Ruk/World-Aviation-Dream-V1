#include "play.h"
#include "route.h"
#include "settings.h"
#include "office.h"
#include "aircraft.h"
struct player2
{
	int game_year;
	int game_month;
	int game_day;
	char airline_name[10001];
	unsigned long long money = 100000000;
	char head_quarter[5];
	bool if_base1 = false;
	bool if_base2 = false;
	bool if_base3 = false;
	bool if_base4 = false;
	bool if_base5 = false;
	char base1[5];
	char base2[5];
	char base3[5];
	char base4[5];
	char base5[5];
	int lsd_A220 = 0;
	int	lsd_A300 = 0;
	int	lsd_A310 = 0;
	int lsd_A320 = 0;
	int	lsd_A330 = 0;
	int lsd_A340 = 0;
	int	lsd_A350 = 0;
	int	lsd_A380 = 0;
	int lsd_BAEBAC_AVROJET = 0;
	int lsd_BAEBAC_JETSTREAM = 0;
	int lsd_B707_120 = 0;
	int lsd_B707_320 = 0;
	int lsd_B727_100 = 0;
	int lsd_B727_200 = 0;
	int lsd_B727_200_Adv = 0;
	int lsd_B737_100 = 0;
	int lsd_B737_200 = 0;
	int lsd_B737_300 = 0;
	int lsd_B737_400 = 0;
	int lsd_B737_500 = 0;
	int lsd_B737_600 = 0;
	int lsd_B737_700 = 0;
	int lsd_B737_800 = 0;
	int lsd_B737_900 = 0;
	int lsd_B737_900ER = 0;
	int lsd_B737_MAX8 = 0;
	int lsd_B737_MAX9 = 0;
	int lsd_B747_100 = 0;
	int lsd_B747_200 = 0;
	int lsd_B747_SP = 0;
	int lsd_B747_300 = 0;
	int lsd_B747_400 = 0;
	int lsd_B747_8I = 0;
	int lsd_B747_8F = 0;
	int lsd_B757_200 = 0;
	int	lsd_B757_300 = 0;
	int lsd_B767 = 0;
	int lsd_B777_200 = 0;
	int lsd_B777_200ER = 0;
	int lsd_B777_200LR = 0;
	int lsd_B777_300 = 0;
	int lsd_B777_300ER = 0;
	int	lsd_B777_X = 0;
	int lsd_B787_8 = 0;
	int lsd_B787_9 = 0;
	int lsd_B787_10 = 0;
	int lsd_DC_9 = 0;
	int lsd_DC_10 = 0;
	int lsd_MD_11 = 0;
	int lsd_MD_80 = 0;
	int lsd_MD_90 = 0;
	int own_A220 = 0;
	int	own_A300 = 0;
	int	own_A310 = 0;
	int own_A320 = 0;
	int	own_A330 = 0;
	int own_A340 = 0;
	int	own_A350 = 0;
	int	own_A380 = 0;
	int own_BAEBAC_AVROJET = 0;
	int own_BAEBAC_JETSTREAM = 0;
	int own_B707_120 = 0;
	int own_B707_320 = 0;
	int own_B727_100 = 0;
	int own_B727_200 = 0;
	int own_B727_200_Adv = 0;
	int own_B737_100 = 0;
	int own_B737_200 = 0;
	int own_B737_300 = 0;
	int own_B737_400 = 0;
	int own_B737_500 = 0;
	int own_B737_600 = 0;
	int own_B737_700 = 0;
	int own_B737_800 = 0;
	int own_B737_900 = 0;
	int own_B737_900ER = 0;
	int own_B737_MAX8 = 0;
	int own_B737_MAX9 = 0;
	int own_B747_100 = 0;
	int own_B747_200 = 0;
	int own_B747_SP = 0;
	int own_B747_300 = 0;
	int own_B747_400 = 0;
	int own_B747_8I = 0;
	int own_B747_8F = 0;
	int own_B757_200 = 0;
	int	own_B757_300 = 0;
	int own_B767 = 0;
	int own_B777_200 = 0;
	int own_B777_200ER = 0;
	int own_B777_200LR = 0;
	int own_B777_300 = 0;
	int own_B777_300ER = 0;
	int	own_B777_X = 0;
	int own_B787_8 = 0;
	int own_B787_9 = 0;
	int own_B787_10 = 0;
	int own_DC_9 = 0;
	int own_DC_10 = 0;
	int own_MD_11 = 0;
	int own_MD_80 = 0;
	int own_MD_90 = 0;
	int airline_number = 0;
	struct airline
	{
		char start[5];
		int start_number;
		char end[5];
		int end_number;
		char aircraft_name[101];
		int aircraft_number;
		int price_eco;
		int price_bus;
		int price_fir;
		int eco_demand;
		int bus_demand;
		int fir_demand;
		int fixed_cost;
		int dis;
		int profit;
	}airline[10001];
	struct staff
	{
		int pilot = 0;
		int crew = 0;
		int worker = 0;
		int manager = 0;
	}staff;
}user2;
int day_speed = 5000;
bool game_pause = 0;
void normal_play(int game_year, int game_month, int game_day, unsigned long long money)
{
	ifstream fin("WAD_Save.txt");
	fin >> user2.game_year;
	fin >> user2.game_month;
	fin >> user2.game_day;
	fin >> user2.airline_name;
	fin >> user2.money;
	fin >> user2.head_quarter;
	fin >> user2.if_base1;
	if (user2.if_base1) fin >> user2.base1;
	fin >> user2.if_base2;
	if (user2.if_base2) fin >> user2.base2;
	fin >> user2.if_base3;
	if (user2.if_base3) fin >> user2.base3;
	fin >> user2.if_base4;
	if (user2.if_base4) fin >> user2.base4;
	fin >> user2.if_base5;
	if (user2.if_base5) fin >> user2.base5;
	fin >> user2.lsd_A220;
	fin >> user2.lsd_A300;
	fin >> user2.lsd_A310;
	fin >> user2.lsd_A320;
	fin >> user2.lsd_A330;
	fin >> user2.lsd_A340;
	fin >> user2.lsd_A350;
	fin >> user2.lsd_A380;
	fin >> user2.lsd_BAEBAC_AVROJET;
	fin >> user2.lsd_BAEBAC_JETSTREAM;
	fin >> user2.lsd_B707_120;
	fin >> user2.lsd_B707_320;
	fin >> user2.lsd_B727_100;
	fin >> user2.lsd_B727_200;
	fin >> user2.lsd_B727_200_Adv;
	fin >> user2.lsd_B737_100;
	fin >> user2.lsd_B737_200;
	fin >> user2.lsd_B737_300;
	fin >> user2.lsd_B737_400;
	fin >> user2.lsd_B737_500;
	fin >> user2.lsd_B737_600;
	fin >> user2.lsd_B737_700;
	fin >> user2.lsd_B737_800;
	fin >> user2.lsd_B737_900;
	fin >> user2.lsd_B737_900ER;
	fin >> user2.lsd_B737_MAX8;
	fin >> user2.lsd_B737_MAX9;
	fin >> user2.lsd_B747_100;
	fin >> user2.lsd_B747_200;
	fin >> user2.lsd_B747_SP;
	fin >> user2.lsd_B747_300;
	fin >> user2.lsd_B747_400;
	fin >> user2.lsd_B747_8I;
	fin >> user2.lsd_B747_8F;
	fin >> user2.lsd_B757_200;
	fin >> user2.lsd_B757_300;
	fin >> user2.lsd_B767;
	fin >> user2.lsd_B777_200;
	fin >> user2.lsd_B777_200ER;
	fin >> user2.lsd_B777_200LR;
	fin >> user2.lsd_B777_300;
	fin >> user2.lsd_B777_300ER;
	fin >> user2.lsd_B777_X;
	fin >> user2.lsd_B787_8;
	fin >> user2.lsd_B787_9;
	fin >> user2.lsd_B787_10;
	fin >> user2.lsd_DC_9;
	fin >> user2.lsd_DC_10;
	fin >> user2.lsd_MD_11;
	fin >> user2.lsd_MD_80;
	fin >> user2.lsd_MD_90;
	fin >> user2.lsd_A220;
	fin >> user2.lsd_A300;
	fin >> user2.lsd_A310;
	fin >> user2.lsd_A320;
	fin >> user2.lsd_A330;
	fin >> user2.lsd_A340;
	fin >> user2.lsd_A350;
	fin >> user2.lsd_A380;
	fin >> user2.lsd_BAEBAC_AVROJET;
	fin >> user2.lsd_BAEBAC_JETSTREAM;
	fin >> user2.lsd_B707_120;
	fin >> user2.lsd_B707_320;
	fin >> user2.lsd_B727_100;
	fin >> user2.lsd_B727_200;
	fin >> user2.lsd_B727_200_Adv;
	fin >> user2.lsd_B737_100;
	fin >> user2.lsd_B737_200;
	fin >> user2.lsd_B737_300;
	fin >> user2.lsd_B737_400;
	fin >> user2.lsd_B737_500;
	fin >> user2.lsd_B737_600;
	fin >> user2.lsd_B737_700;
	fin >> user2.lsd_B737_800;
	fin >> user2.lsd_B737_900;
	fin >> user2.lsd_B737_900ER;
	fin >> user2.lsd_B737_MAX8;
	fin >> user2.lsd_B737_MAX9;
	fin >> user2.lsd_B747_100;
	fin >> user2.lsd_B747_200;
	fin >> user2.lsd_B747_SP;
	fin >> user2.lsd_B747_300;
	fin >> user2.lsd_B747_400;
	fin >> user2.lsd_B747_8I;
	fin >> user2.lsd_B747_8F;
	fin >> user2.lsd_B757_200;
	fin >> user2.lsd_B757_300;
	fin >> user2.lsd_B767;
	fin >> user2.lsd_B777_200;
	fin >> user2.lsd_B777_200ER;
	fin >> user2.lsd_B777_200LR;
	fin >> user2.lsd_B777_300;
	fin >> user2.lsd_B777_300ER;
	fin >> user2.lsd_B777_X;
	fin >> user2.lsd_B787_8;
	fin >> user2.lsd_B787_9;
	fin >> user2.lsd_B787_10;
	fin >> user2.lsd_DC_9;
	fin >> user2.lsd_DC_10;
	fin >> user2.lsd_MD_11;
	fin >> user2.lsd_MD_80;
	fin >> user2.lsd_MD_90;
	fin >> user2.own_A220;
	fin >> user2.own_A300;
	fin >> user2.own_A310;
	fin >> user2.own_A320;
	fin >> user2.own_A330;
	fin >> user2.own_A340;
	fin >> user2.own_A350;
	fin >> user2.own_A380;
	fin >> user2.own_BAEBAC_AVROJET;
	fin >> user2.own_BAEBAC_JETSTREAM;
	fin >> user2.own_B707_120;
	fin >> user2.own_B707_320;
	fin >> user2.own_B727_100;
	fin >> user2.own_B727_200;
	fin >> user2.own_B727_200_Adv;
	fin >> user2.own_B737_100;
	fin >> user2.own_B737_200;
	fin >> user2.own_B737_300;
	fin >> user2.own_B737_400;
	fin >> user2.own_B737_500;
	fin >> user2.own_B737_600;
	fin >> user2.own_B737_700;
	fin >> user2.own_B737_800;
	fin >> user2.own_B737_900;
	fin >> user2.own_B737_900ER;
	fin >> user2.own_B737_MAX8;
	fin >> user2.own_B737_MAX9;
	fin >> user2.own_B747_100;
	fin >> user2.own_B747_200;
	fin >> user2.own_B747_SP;
	fin >> user2.own_B747_300;
	fin >> user2.own_B747_400;
	fin >> user2.own_B747_8I;
	fin >> user2.own_B747_8F;
	fin >> user2.own_B757_200;
	fin >> user2.own_B757_300;
	fin >> user2.own_B767;
	fin >> user2.own_B777_200;
	fin >> user2.own_B777_200ER;
	fin >> user2.own_B777_200LR;
	fin >> user2.own_B777_300;
	fin >> user2.own_B777_300ER;
	fin >> user2.own_B777_X;
	fin >> user2.own_B787_8;
	fin >> user2.own_B787_9;
	fin >> user2.own_B787_10;
	fin >> user2.own_DC_9;
	fin >> user2.own_DC_10;
	fin >> user2.own_MD_11;
	fin >> user2.own_MD_80;
	fin >> user2.own_MD_90;
	fin >> user2.airline_number;
	for (int i = 0; i < user2.airline_number; ++i)
	{
		fin >> user2.airline->start;
		fin >> user2.airline->start_number;
		fin >> user2.airline->end;
		fin >> user2.airline->end_number;
		fin >> user2.airline->aircraft_name;
		fin >> user2.airline->aircraft_number;
		fin >> user2.airline->price_eco;
		fin >> user2.airline->price_bus;
		fin >> user2.airline->price_fir;
		fin >> user2.airline->eco_demand;
		fin >> user2.airline->bus_demand;
		fin >> user2.airline->fir_demand;
		fin >> user2.airline->fixed_cost;
		fin >> user2.airline->dis;
		fin >> user2.airline->profit;
	}
	fin >> user2.staff.pilot;
	fin >> user2.staff.crew;
	fin >> user2.staff.worker;
	fin >> user2.staff.manager;
	fin.close();
	char ch;
	while (1)
	{
		Sleep(day_speed);
		system("mode con cols=180 lines=51");
		cout << endl;
		for (int i = 0; i < 79; i++) cout << " ";
		cout << "Welcome to Airwaysim!";
		cout << endl << endl;
		for (int i = 0; i < 13; i++) cout << " ";
		cout << "Airline name:" << user2.airline_name << "   " << "Money:" << user2.money << "   HeadQuarter:" << user2.head_quarter << "   Office       Aircraft       Dashboard       Route       Game Time:"<<user2.game_year<<"/"<<user2.game_month<<"/"<<user2.game_day<<"       Settings";
		ch = _getch();
		if (ch == 'p' && !game_pause) game_pause = 1;
		if (ch == 'p' && game_pause) game_pause = 0;
		if (ch == 's' && game_pause) settings();
		if (ch == 'a' && game_pause) aircraft();
		if (ch == 'o' && game_pause) office();
		if (ch == 'r' && game_pause) route();
		if (ch == 'd' && game_pause) //dashboard();
		if (game_pause)
		{
			//game_pause();
		}
		else
		{
			if (++user2.game_day == 30)
			{
				if (++user2.game_month == 12)
				{
					user2.game_month = 1;
					++user2.game_year;
				}
			}
		}
	}

}
