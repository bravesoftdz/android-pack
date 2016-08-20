#include "Code.h"

class TElementRunner {
private:
    TCode **codeList;
    int codeCount;

    TCode *find(const char *unit);
    int Add(TCode *code);
public:
	TCode *tools;
	
    TElementRunner();
    ~TElementRunner();

    TValue* run(id_element e, const char *entry, TArgs *args);
	int init(id_element e);
	
	int createTools(id_element e);
	int destroyTools(id_element e);
};

extern TElementRunner *erun;
