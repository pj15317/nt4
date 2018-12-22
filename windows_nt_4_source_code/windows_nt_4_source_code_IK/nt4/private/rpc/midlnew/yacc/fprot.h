#ifndef FPROT_INCLUDED
#define FPROT_INCLUDED
extern  void error(char *s, ...);
extern  struct looksets *flset(struct looksets *p);
extern  void main(int argc,char * *argv);
extern  int unix_getc(struct _iobuf *iop);
extern  void yungetc(int, FILE * );
extern  void prlook(struct looksets *p);
extern  void putitem(int *ptr,struct looksets *lptr);
extern  char *symnam(int i);
extern  int state(int c);
extern  int setunion(int *a,int *b);
extern  char *writem(int *pp);
extern  int defin(int t,char *s);
extern  void defout(void );
extern  int fdtype(int t);
extern  int gettok(void );
extern  void go2gen(int c);
extern  void go2out(void );
extern  void hideprod(void );
extern  void wrstate(int i);
extern  void aoutput(void );
extern  void gin(int i);
extern  int gtnm(void );
extern  int nxti(void );
extern  void stin(int i);
extern  void arout(char *s,int *v,int n);
extern  void writeline(FILE *fh);
extern	void aryfil( int *v, int n, int c );
extern	void cpfir( void );
extern	void cpres( void );
extern	void cempty( void );
extern	void callopt( void );
extern	void SSwitchExit( void );
extern	char * symnam( int );
extern	void summary( void );
extern	void cpyunion( void );
extern	void ydfout( void );
extern	void setup( int i, char *argv[] );
extern	int chfind( int, char * );
extern	void cpycode( void );
extern	void cpyact( int );
extern	void finact( void );
extern	void yyparse( void );
extern	void usage( void );
extern	void yg2out( void );
extern	void warray( char *, int *, int );
extern	void osummary( void );
extern	void others( void );
extern	void closure( int );
extern	int apack( int *, int );
extern	void stagen( void );
extern	int state( int );
extern	void SSwitchInit( void );
extern	void EmitStateVsExpectedConstruct( int, int * );
extern	int CountStateVsExpectedConstruct( int, int * );
extern	void EmitStateGotoTable( int );
extern	void wdef( char *, int );
extern void wract( int );
extern void precftn( int, int, int );
extern void output( void );
extern int skipcom( void );


#endif
