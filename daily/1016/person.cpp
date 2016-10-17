
//....已省略大量无关代码

#ifndef _REWRITER_typedef_Person
#define _REWRITER_typedef_Person
typedef struct objc_object Person;
typedef struct {} _objc_exc_Person;
#endif

extern "C" unsigned long OBJC_IVAR_$_Person$age;
extern "C" unsigned long OBJC_IVAR_$_Person$weight;
struct Person_IMPL {
    struct NSObject_IMPL NSObject_IVARS;
    int age;
    double weight;
};


// -(void)walk;
// -(void)eat;
// -(void)info;
/* @end */


// @implementation Person


static void _I_Person_walk(Person * self, SEL _cmd) {
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_f4_tc5qlg493s5b5lz8l5jgy_tm0000gn_T_person_bbd845_mi_0);
}


static void _I_Person_eat(Person * self, SEL _cmd) {
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_f4_tc5qlg493s5b5lz8l5jgy_tm0000gn_T_person_bbd845_mi_1);
}


static void _I_Person_info(Person * self, SEL _cmd) {
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_f4_tc5qlg493s5b5lz8l5jgy_tm0000gn_T_person_bbd845_mi_2,(*(int *)((char *)self + OBJC_IVAR_$_Person$age)),(*(double *)((char *)self + OBJC_IVAR_$_Person$weight)));
}

// @end

int main()
{
    
    Person * p = ((Person *(*)(id, SEL))(void *)objc_msgSend)((id)objc_getClass("Person"), sel_registerName("new"));
    (*(int *)((char *)p + OBJC_IVAR_$_Person$age)) = 20;
    (*(double *)((char *)p + OBJC_IVAR_$_Person$weight)) = 130;
    ((void (*)(id, SEL))(void *)objc_msgSend)((id)p, sel_registerName("info"));
    ((void (*)(id, SEL))(void *)objc_msgSend)((id)p, sel_registerName("walk"));
    ((void (*)(id, SEL))(void *)objc_msgSend)((id)p, sel_registerName("eat"));
}

struct _prop_t {
    const char *name;
    const char *attributes;
};

struct _protocol_t;

struct _objc_method {
    struct objc_selector * _cmd;
    const char *method_type;
    void  *_imp;
};

struct _protocol_t {
    void * isa;  // NULL
    const char *protocol_name;
    const struct _protocol_list_t * protocol_list; // super protocols
    const struct method_list_t *instance_methods;
    const struct method_list_t *class_methods;
    const struct method_list_t *optionalInstanceMethods;
    const struct method_list_t *optionalClassMethods;
    const struct _prop_list_t * properties;
    const unsigned int size;  // sizeof(struct _protocol_t)
    const unsigned int flags;  // = 0
    const char ** extendedMethodTypes;
};

struct _ivar_t {
    unsigned long int *offset;  // pointer to ivar offset location
    const char *name;
    const char *type;
    unsigned int alignment;
    unsigned int  size;
};

struct _class_ro_t {
    unsigned int flags;
    unsigned int instanceStart;
    unsigned int instanceSize;
    unsigned int reserved;
    const unsigned char *ivarLayout;
    const char *name;
    const struct _method_list_t *baseMethods;
    const struct _objc_protocol_list *baseProtocols;
    const struct _ivar_list_t *ivars;
    const unsigned char *weakIvarLayout;
    const struct _prop_list_t *properties;
};

struct _class_t {
    struct _class_t *isa;
    struct _class_t *superclass;
    void *cache;
    void *vtable;
    struct _class_ro_t *ro;
};

struct _category_t {
    const char *name;
    struct _class_t *cls;
    const struct _method_list_t *instance_methods;
    const struct _method_list_t *class_methods;
    const struct _protocol_list_t *protocols;
    const struct _prop_list_t *properties;
};
extern "C" __declspec(dllimport) struct objc_cache _objc_empty_cache;
#pragma warning(disable:4273)

extern "C" unsigned long int OBJC_IVAR_$_Person$age __attribute__ ((used, section ("__DATA,__objc_ivar"))) = __OFFSETOFIVAR__(struct Person, age);
extern "C" unsigned long int OBJC_IVAR_$_Person$weight __attribute__ ((used, section ("__DATA,__objc_ivar"))) = __OFFSETOFIVAR__(struct Person, weight);

static struct /*_ivar_list_t*/ {
    unsigned int entsize;  // sizeof(struct _prop_t)
    unsigned int count;
    struct _ivar_t ivar_list[2];
} _OBJC_$_INSTANCE_VARIABLES_Person __attribute__ ((used, section ("__DATA,__objc_const"))) = {
    sizeof(_ivar_t),
    2,
    {{(unsigned long int *)&OBJC_IVAR_$_Person$age, "age", "i", 2, 4},
        {(unsigned long int *)&OBJC_IVAR_$_Person$weight, "weight", "d", 3, 8}}
};

