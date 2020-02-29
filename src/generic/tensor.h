#include <string>
#include <list>

#include "object.h"

using namespace std;

class AbstractTensor : public AbstractObject{
    public:        
        // constructor
        AbstractTensor();

        // destructor
        ~AbstractTensor();

        // methods
        virtual string show() const;
};
