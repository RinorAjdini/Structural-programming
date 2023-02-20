Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
For example:

Input	
aaa123aa222aa2aaa23aaaaa22 11112 222311111
aaa123aa222aa2aaa23aaaaa22 11112 aaaaaaaa1
aaa123aa222aa2aaa23aaaaa22 11112 2a23111a1
aaa123aa222aa2aaa23aaaaa22 11112 222311aa1
aaa123aa222aa2aaa23aaaaa22 11112 222311111
aaa123aa222aa2aaa21aa11122 11112 aaaa11111
1aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

Result
123aa222aa2aaa21aa11122 11112 aaaa11111