int icmp(const void *vp1, const void *vp2)
{
	return *(const int *)vp1 - *(const int *)vp2; 
}
