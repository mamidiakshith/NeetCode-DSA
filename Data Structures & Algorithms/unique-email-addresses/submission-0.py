class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        st=set()
        for i in emails:
            a=""
            loc,dom=i.split('@')
            if '+' in loc:
                loc=loc[: loc.index('+')]
            loc=loc.replace('.','')
            st.add(loc+'@'+dom)
        return len(st)
            

                    