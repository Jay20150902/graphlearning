 数据结构中图的基本操作如下：

（1） CreatGraph（G）输入图G 的顶点和边，建立图G 的存储。
（2）DestroyGraph（G）释放图G 占用的存储空间。
（3）GetVex（G，v）在图G 中找到顶点v，并返回顶点v 的相关信息。
（4）PutVex（G，v，value）在图G 中找到顶点v，并将value 值赋给顶点v。
（5）InsertVex（G，v）在图G 中增添新顶点v。
（6）DeleteVex（G，v）在图G 中，删除顶点v 以及所有和顶点v 相关联的边或弧。
（7）InsertArc（G，v，w）在图G 中增添一条从顶点v 到顶点w 的边或弧。
（8）DeleteArc（G，v，w）在图G 中删除一条从顶点v 到顶点w 的边或弧。
（9）DFSTraverse（G，v）在图G 中，从顶点v 出发深度优先遍历图G。
（10）BFSTtaverse（G，v）在图G 中，从顶点v 出发广度优先遍历图G。
（11）LocateVex（G，u）在图G 中找到顶点u，返回该顶点在图中位置。
（12）FirstAdjVex（G，v）在图G 中，返回v 的第一个邻接点。若顶点在G 中没有邻接顶点，则返回“空”。
（13）NextAdjVex（G，v，w）在图G 中，返回v 的（相对于w 的）下一个邻接顶点。若w 是v 的最后一个邻接点，则返回“空”。


 -- doodlesomething