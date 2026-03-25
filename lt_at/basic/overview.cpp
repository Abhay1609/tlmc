
class generic_payload
{
    uint32_t address;
    uint8_t data_ptr;
    bool is_read;
}
int main()
{
    std::cout << "TLM2 support gerneric payload" << std::endl;
    std::cout <<  " TLM can only be used in multiple proccess " << std::endl;
    return 0;
}