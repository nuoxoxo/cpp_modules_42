n = 42
bin_num = format(n, '0{}_b'.format(4))

print(n, '\t', bin_num)

what = 'applied: N x (1 << 8)'
m = 42 * (1 << 8)
bin_num = format(m, '0{}_b'.format(4))

print(m, '\t', bin_num, '\t', what)
