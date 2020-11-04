#define MAXLEN 255

#define GRADE_LESSER_ALLAGE
#define GRADE_LESSER_R18
#define GRADE_LESSER_R18G

typedef struct GalgameSource
{
	char BaiduBaike[MAXLEN];//百度百科
	char zhWikipedia[MAXLEN];//中文维基
	char jaWikipedia[MAXLEN];//日文维基
	char enWikipedia[MAXLEN];//英文维基
	char moegirls[MAXLEN];//萌娘百科
	char Getchu[MAXLEN];//G
	char TwoDFan[MAXLEN];//2dfan
	char bangumi[MAXLEN];//bangumi
	char VNDB[MAXLEN];//VNDB
	char ErogameScape[MAXLEN];//批评空间
	char YouYuDeLoli[MAXLEN];//忧郁的弟弟
	char YouYuDeLoliNum[MAXLEN];//忧郁的弟弟编号
	char lianaiyx[MAXLEN];//恋爱游戏网
	char sayhanabi[MAXLEN];//say花火
	char EndlessBBS[MAXLEN];//终点论坛

}GalgameSource;

typedef struct GalgameScore
{
	//Strictly Force
	int VNDB;
	int ErogameScape;
	int bangumi;
	//Suggestive
	int IGN;
	int famicon;
	int Douban;
	int bilibili;
	int lianaiyx;

}GalgameScore;

typedef struct GalgameDistribution
{
	//Distribution Info
	int releaseDate;
	char latestVersion[MAXLEN];
	char Developer[MAXLEN];
	char Producer[MAXLEN];
	int GradingSystem;
	//注意：Distribution的属性填写NULL则为继承游戏的
	char name[MAXLEN];
	char name_zh[MAXLEN];
	char name_ja[MAXLEN];
	char name_en[MAXLEN];
	char OfficialWebsite[MAXLEN];
	char OfficialDLsite[MAXLEN];
	char OfficialSteam[MAXLEN];
	char OfficialSteamDB[MAXLEN];
	GalgameSource Source;
	#ifndef __cplusplus or CPP
		GalgameDistribution *next;
	#endif // C++
}GalgameDistribution;

typedef struct Galgame
{
	char name[MAXLEN];
	char name_zh[MAXLEN];
	char name_ja[MAXLEN];
	char name_en[MAXLEN];
	char OfficialWebsite[MAXLEN];
	char OfficialDLsite[MAXLEN];
	char OfficialSteam[MAXLEN];
	char OfficialSteamDB[MAXLEN];
	#ifdef __cplusplus or CPP
		vector<GalgameDistribution> Distribution;
	#else
		GalgameDistribution *pDistribution;
		int NumDistribution;
	#endif // C++
	GalgameScore Score;
}Galgame;

//Comment: if using C++ ,all of above should use string class to reprograme, except GalgameScore.