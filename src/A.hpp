#ifndef _A_H_
#define _A_H_

#include <boost/serialization/split_member.hpp>
#include <boost/serialization/export.hpp>

class A
{
public:
    A();
    virtual ~A();

    virtual int get() = 0;

    BOOST_SERIALIZATION_SPLIT_MEMBER()
    
    template<class Archive>
    void load(Archive & ar, const unsigned int version);
    
    template<class Archive>
    void save(Archive & ar, const unsigned int version) const;
    
};

BOOST_CLASS_EXPORT_KEY( A );


#endif /* _A_H_ */
