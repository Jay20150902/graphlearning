#define INFINITY 65535 //表示无穷大-->在带权的图中用到，即网
#define MAX_VERTEX_NUM 20 //图的最大定点数

#define MAX_INFO 20  //每条弧附带信息最大长度


//顶点关系类型
typedef int VRType;

//附加信息类型
typedef char InfoType;

//顶点数据类型
typedef int VertexType;

//图的种类:分别代表有向图，有向网，无向图，无向网
typedef enum {DG,DN,UDG,UDN} GraphKind;


typedef struct {
	VRType adj; //定点关系类型，对无权图用1或0表示是否相邻；对带权图，则为权值类型
	InfoType *info;	//附加信息指针
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];


typedef struct {
	//顶点向量
	VertexType vexs[MAX_VERTEX_NUM];
	//邻接矩阵
	AdjMatrix arcs;
	//图的当前顶点数
	int vexnum;
	//图的弧数
	int arcnum;
	//图的种类
	GraphKind kind;
}MGraph;
