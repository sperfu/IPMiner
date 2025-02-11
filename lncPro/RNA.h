#ifndef RNA_H
#define RNA_H

#include "string"
#include "iostream"
#include "vector"

using namespace std;

class RNA
{
    public:
        RNA();

        void init( string filename );
        void stepFirst();
        void stepSecond();
        void stepThird();
        void output();

        vector<string> protein_name;

    public:
        string RNA_string;
        int len_RNA_string;

        int *score1;
        int len_score1;
        double ten1[10];

        int *score2;
        int len_score2;
        double ten2[10];

        int *score3;
        int len_score3;
        double ten3[10];

        double **humanprotein_1;
        int len_humanprotein_1;
        double **humanprotein_2;
        int len_humanprotein_2;
        double **humanprotein_3;
        int len_humanprotein_3;
        double **humanprotein_4;
        int len_humanprotein_4;
        double **humanprotein_5;
        int len_humanprotein_5;
        double **load_humanprotein( vector<double*> &other , double **humanprotein , int &len );

        int len_w;
        double w1[100];
        double w2[100];
        double w3[100];
        double w4[100];
        double w5[100];

        int len_m;
        double m11[100];
        double m12[100];
        double m21[100];
        double m22[100];
        double m31[100];
        double m32[100];
        double m41[100];
        double m42[100];
        double m51[100];
        double m52[100];

        double *fscore1;
        double *fscore2;
        double *fscore3;
        double *fscore4;
        double *fscore5;

        double *fscore;



    private:
        void encode1();
        void encode2();
        void encode3();
        void lq( int* score , int len , double *ten );

        void load_w( string filename , double *w );
        void load_m( string filename , double *m );



        double *compute_score( double ** humanprotein , double *ten , double *w , double *score , int len );
        void transfer_score( double *score , double *m1 , double *m2 , double *w , int len );
        void cal_fscore();
};

#endif // RNA_H
