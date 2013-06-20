#set $should_create_from_singleton_function = $current_class.is_singleton_instance
#set $should_create_from_singleton_field = $current_class.is_enum or $current_class.is_singleton_field
#set $is_abstract = $current_class.is_abstract
protected:
#if $is_abstract
	${current_class.class_name}();
#end if

private:
#if $should_create_from_singleton_function
	${current_class.class_name}();
#elif $should_create_from_singleton_field
	${current_class.class_name}();
#end if
#if not $current_class.is_static_methods
void * self;
#end if

};
