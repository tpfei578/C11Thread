struct func
{
    int& i;
    func(int& i_):i(i_){}
    void operator() ()
    {
        for (unsigned j = 0; j < 100000; ++j)
        {
            do_somethind(i);
        }
    }
};

void oops()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.detach();
}

//comment
//test remove comment