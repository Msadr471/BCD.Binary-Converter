/*
 * BcdBinary.c
 *
 * Created: 2019-05-12 21:52:07
 * Author : Mohammad Sadr
 */ 

//Code conversion function BCD to Binary
unsigned char BCD_to_BIN(unsigned char BCD)
{
	unsigned char A = ((BCD & 0xf0)>>4);
	unsigned char B = (BCD & 0x0f);
	unsigned char BIN= (A*10) + B;
	return BIN;
}

//Code conversion function Binary to BCD
unsigned char BIN_to_BCD(unsigned char BIN)
{
	unsigned char A = (BIN / 10);
	unsigned char B = (BIN % 10);
	unsigned char BCD = (A<<4) | B;
	return BCD;
}