import DefaultTheme from 'vitepress/theme'
import PdfViewer from './components/PdfViewer.vue'

export default {
  extends: DefaultTheme,
  enhanceApp({ app }) {
    app.component('PdfViewer', PdfViewer)
  }
}
