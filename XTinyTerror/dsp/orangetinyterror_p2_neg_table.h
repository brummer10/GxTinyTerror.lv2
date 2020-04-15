
// orangetinyterror_p2_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -1.400000
 // --table_div  1.500259
 // --table_op  1.000000

struct tableorangetinyterror_p2_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tableorangetinyterror_p2_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tableorangetinyterror_p2_neg&() const { return *(tableorangetinyterror_p2_neg*)this; }
};

 static tableorangetinyterror_p2_neg_imp<200> orangetinyterror_p2_neg_table __rt_data = {
	0,0.862957,142.143,200, {
	0.000000000000,0.010435724167,0.022711551173,0.034762086590,0.046690014466,
	0.058491202560,0.070166589171,0.081716878433,0.093142807554,0.104445103149,
	0.115624497627,0.126681749767,0.137617602403,0.148432818885,0.159128163559,
	0.169704402016,0.180162317721,0.190502678621,0.200726275242,0.210833893135,
	0.220826332160,0.230704383375,0.240468845892,0.250120525691,0.259660231426,
	0.269088767494,0.278406951845,0.287615595344,0.296715516094,0.305707529940,
	0.314592464828,0.323371135176,0.332044366798,0.340612983404,0.349077816588,
	0.357439680477,0.365699409576,0.373857827865,0.381915766358,0.389874045040,
	0.397733494894,0.405494939339,0.413159205906,0.420727114231,0.428199494628,
	0.435577168158,0.442860953934,0.450051669923,0.457150137815,0.464157174882,
	0.471073590591,0.477900203794,0.484637819296,0.491287249650,0.497849297296,
	0.504324769628,0.510714462623,0.517019177887,0.523239710155,0.529376847977,
	0.535431385156,0.541404101940,0.547295787497,0.553107216524,0.558839168035,
	0.564492410083,0.570067714077,0.575565843996,0.580987560580,0.586333621969,
	0.591604781192,0.596801785349,0.601925382058,0.606976311834,0.611955309742,
	0.616863110536,0.621700440532,0.626468023940,0.631166579725,0.635796824434,
	0.640359466216,0.644855211249,0.649284761398,0.653648812239,0.657948055819,
	0.662183178483,0.666354863674,0.670463787889,0.674510623991,0.678496039875,
	0.682420697984,0.686285256513,0.690090368615,0.693836681630,0.697524840359,
	0.701155481310,0.704729238825,0.708246740606,0.711708610132,0.715115465075,
	0.718467918923,0.721766580734,0.725012052699,0.728204932972,0.731345814819,
	0.734435286433,0.737473930733,0.740462325890,0.743401044696,0.746290655382,
	0.749131720680,0.751924798987,0.754670442850,0.757369200751,0.760021615016,
	0.762628224427,0.765189562036,0.767706155898,0.770178529618,0.772607201242,
	0.774992684605,0.777335488218,0.779636116248,0.781895067177,0.784112835373,
	0.786289910482,0.788426777095,0.790523915053,0.792581799665,0.794600901147,
	0.796581685691,0.798524614049,0.800430143216,0.802298724748,0.804130806445,
	0.805926830873,0.807687236335,0.809412456628,0.811102921230,0.812759054964,
	0.814381278376,0.815970007501,0.817525654116,0.819048625846,0.820539325633,
	0.821998152401,0.823425500837,0.824821761331,0.826187320139,0.827522559456,
	0.828827857206,0.830103587193,0.831350119592,0.832567820001,0.833757050311,
	0.834918168370,0.836051528310,0.837157479996,0.838236369830,0.839288540052,
	0.840314329149,0.841314072145,0.842288099942,0.843236739883,0.844160315807,
	0.845059147540,0.845933551618,0.846783840785,0.847610324479,0.848413308411,
	0.849193094888,0.849949982668,0.850684267336,0.851396240851,0.852086191891,
	0.852754405703,0.853401164400,0.854026746825,0.854631428554,0.855215481738,
	0.855779175793,0.856322776595,0.856846547130,0.857350747161,0.857835633593,
	0.858301460119,0.858748477551,0.859176933704,0.859587073484,0.859979138816,
	0.860353368924,0.860710000002,0.861049265499,0.861371396092,0.861676619779,
	0.861965161756,0.862237244376,0.862493087511,0.862732908479,0.862956921652
	}
};

double always_inline orangetinyterror_p2_negclip(double x) {
    double f = fabs(x);
    f = f * orangetinyterror_p2_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = orangetinyterror_p2_neg_table.data[0];
    } else if (i >= orangetinyterror_p2_neg_table.size-1) {
        f = orangetinyterror_p2_neg_table.data[orangetinyterror_p2_neg_table.size-1];
    } else {
    f -= i;
    f = orangetinyterror_p2_neg_table.data[i]*(1-f) + orangetinyterror_p2_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}
