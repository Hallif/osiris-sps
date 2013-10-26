<?xml version='1.0' encoding='utf-8'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">

  <xsl:output method="html"/>

  <xsl:template match="error">
    <div class="osError">
      <div class="osError_Title">
        <xsl:value-of select="@title"/>              
      </div>
      <p>
        <xsl:value-of select="@description"/>
      </p>      
    </div>
  </xsl:template>

</xsl:stylesheet>