#define SIZE           24
#define MAT_SIZE       (SIZE*SIZE*sizeof(int))

int A_init[SIZE][SIZE]  = {
    {181,242,121,183,206,92,200,157,59,246,13,24,108,168,125,179,134,202,74,79,86,66,63,29},
    {178,198,233,162,184,134,150,155,153,199,114,94,81,0,92,164,206,186,166,191,173,25,82,38},
    {216,38,65,42,106,189,132,201,214,41,24,231,249,78,84,109,168,159,127,107,217,254,197,217},
    {64,22,112,106,14,207,197,73,149,38,106,250,17,254,196,121,218,22,28,237,31,87,82,132},
    {165,67,227,22,65,61,140,27,231,194,168,145,33,44,175,127,31,56,194,227,186,13,252,27},
    {160,183,169,113,226,50,116,138,23,147,247,20,73,174,185,178,196,200,232,178,234,117,9,251},
    {36,192,256,31,150,165,159,79,217,121,13,123,77,233,87,219,20,225,3,27,22,69,216,92},
    {151,236,72,44,178,105,211,237,216,24,107,168,194,178,99,168,246,250,120,212,18,39,194,112},
    {230,114,234,101,27,26,158,119,246,3,119,80,227,214,96,87,35,179,195,156,71,84,53,89},
    {188,225,242,243,130,165,133,225,222,186,139,152,171,23,156,42,214,11,46,45,206,78,34,196},
    {232,161,201,187,247,80,215,11,9,164,220,201,118,161,98,1,155,14,60,7,82,118,211,230},
    {4,91,20,188,232,229,234,82,240,175,105,12,160,204,177,201,129,241,83,235,125,216,91,29},
    {120,97,74,42,130,29,15,160,252,82,140,48,226,25,154,19,207,190,197,216,177,8,14,111},
    {175,204,50,69,35,251,68,208,171,18,135,186,200,139,182,170,7,144,83,83,79,15,192,165},
    {236,198,116,130,248,198,107,218,107,105,178,209,163,22,218,163,144,65,55,48,102,217,57,158},
    {192,201,215,171,104,183,55,72,75,214,72,181,85,212,173,88,183,144,221,90,117,129,201,103},
    {32,75,38,70,53,76,66,27,221,10,17,122,234,218,56,39,63,112,194,124,178,81,244,38},
    {76,225,145,248,141,149,27,180,84,164,149,19,101,179,147,10,93,14,219,241,77,241,136,156},
    {120,146,26,53,175,54,79,69,113,29,204,90,203,227,1,180,227,100,44,206,163,17,215,25},
    {134,167,185,215,181,100,189,203,220,158,112,2,124,100,183,251,110,159,21,118,77,12,249,5},
    {161,110,245,113,227,139,107,236,250,244,231,63,191,75,102,110,18,210,26,133,53,66,50,140},
    {151,76,114,163,117,76,250,117,154,97,73,235,147,9,176,91,246,256,72,13,228,172,109,156},
    {105,13,88,253,167,189,23,42,137,249,15,115,118,234,126,129,167,54,211,229,243,249,143,118},
    {191,245,66,166,36,208,209,127,193,246,68,224,31,65,56,167,241,144,111,30,54,115,34,56}
};

int B_init[SIZE][SIZE]  = {
    {0,0,0,1,0,0,1,1,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,1},
    {0,1,0,1,0,0,1,1,0,1,0,1,0,1,0,0,1,1,0,1,1,0,0,1},
    {1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1},
    {0,0,0,1,1,0,0,0,1,0,1,1,0,1,1,1,0,1,0,0,1,1,1,1},
    {1,1,0,0,1,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0},
    {1,0,1,0,1,1,0,1,0,0,1,1,0,1,1,0,0,0,0,0,1,1,1,0},
    {1,1,1,0,1,1,1,0,1,1,0,0,1,0,1,1,1,1,0,0,0,1,0,0},
    {1,1,1,1,1,1,0,1,1,0,1,1,0,0,0,0,1,0,1,0,1,0,0,0},
    {1,1,1,1,1,1,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1},
    {1,1,0,1,0,0,0,0,1,1,1,0,0,1,0,0,1,1,0,1,1,0,0,0},
    {1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,1,1,1,0,0,1,1,0,0},
    {0,0,0,0,1,1,0,1,0,0,1,1,0,0,0,1,0,0,1,0,0,0,1,1},
    {0,0,1,0,1,1,0,1,0,0,1,1,1,1,1,0,1,0,1,0,0,0,1,1},
    {1,0,0,0,0,1,1,0,0,1,0,1,1,1,0,0,1,0,1,1,1,1,0,0},
    {1,1,1,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,0,1,0,0,0,0},
    {1,1,0,1,1,0,1,1,0,0,0,1,0,1,0,1,0,0,1,1,0,1,1,0},
    {0,1,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,1,0,0,0,0,1},
    {1,1,0,1,1,0,0,0,1,0,0,0,1,1,1,1,0,0,0,0,1,0,0,1},
    {0,0,0,0,1,0,0,1,0,0,1,1,0,0,1,1,0,0,0,0,1,0,0,1},
    {0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,1,1,1,0,1,1,0},
    {1,0,1,0,1,0,1,0,0,1,1,1,1,0,1,1,0,1,0,1,0,0,0,1},
    {0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,1,0,0,1,1,0},
    {1,0,1,1,0,1,1,0,0,0,0,1,1,1,0,1,1,0,1,0,0,1,1,1},
    {0,0,0,1,0,1,0,0,0,0,1,1,1,1,0,1,0,1,0,0,1,0,0,1}
};