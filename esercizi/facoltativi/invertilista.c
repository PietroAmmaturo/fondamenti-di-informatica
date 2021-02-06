list_t * invertilista(list_t * h)
{
  list_t * p;
  int rev;
  
  rev = 0;
  p = h;
  while (p) {
    if (p->info == 0) {
      rev = 1 - rev;
    } else if(rev) {
      p->info = -(p->info);
    }
    p = p->next;
  }
  return h;
}
