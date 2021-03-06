struct avlNode{
	int balance ;/*keep in mind -1 ~ left 0~balanced 1~right */
	int val;
	struct avlNode *l; /* create left and right pointers*/ 
	struct avlNode *r; 
};
typedef struct avlNode avlNode;



struct qNode{
	avlNode *pval;/*It's a que designed for the avl */
	struct qNode *nxt;

};
typedef struct qNode qNode;


/*declare que functions*/
int qEnqueue(qNode **root,avlNode *val);
int qDequeue(qNode **node,int *out);
int ProcessAvlLevel(qNode **que);

/*declare avl functions*/
int add_bst(avlNode **root,int val);
int printAvlInOrder(avlNode *root);
int printAvlLevelOrder(avlNode *root);
int isAVL(avlNode **root);
int ProccessInOrder(avlNode *root,int *outVal);
int compare(avlNode *root);
int compareDepth(avlNode *root);
int depthCalc(avlNode *root,int currentDepth,int *maxDepth);
int rotate(avlNode **root,unsigned int Left0_Right1);
int dblrotate(avlNode **root,unsigned int MajLMinR0_MajRMinL1);


