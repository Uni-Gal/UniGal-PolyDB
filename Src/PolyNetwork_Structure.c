#define MAXLEN 255

#define GRADE_LESSER_ALLAGE
#define GRADE_LESSER_R18
#define GRADE_LESSER_R18G

typedef struct GalgameSource
{
	char BaiduBaike[MAXLEN];//�ٶȰٿ�
	char zhWikipedia[MAXLEN];//����ά��
	char jaWikipedia[MAXLEN];//����ά��
	char enWikipedia[MAXLEN];//Ӣ��ά��
	char moegirls[MAXLEN];//����ٿ�
	char Getchu[MAXLEN];//G
	char TwoDFan[MAXLEN];//2dfan
	char bangumi[MAXLEN];//bangumi
	char VNDB[MAXLEN];//VNDB
	char ErogameScape[MAXLEN];//�����ռ�
	char YouYuDeLoli[MAXLEN];//�����ĵܵ�
	char YouYuDeLoliNum[MAXLEN];//�����ĵܱܵ��
	char lianaiyx[MAXLEN];//������Ϸ��
	char sayhanabi[MAXLEN];//say����
	char EndlessBBS[MAXLEN];//�յ���̳

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
	//ע�⣺Distribution��������дNULL��Ϊ�̳���Ϸ��
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