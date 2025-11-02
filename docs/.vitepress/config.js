import { defineConfig } from 'vitepress';

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: 'Advanced Linux Programming',
  description: 'NOTE',
  base: '/ALP/', // make sure this matches your GitHub repo if deploying to Pages

  themeConfig: {
    nav: [
      { text: 'Home', link: '/' },
      { text: 'Question', link: '/question' }, 
      { text: 'Syllabus', link: '/syllabus' }, 
      { text: 'Assignment Submission Details', link: 'https://docs.google.com/spreadsheets/d/1t6MjfKk-TOmJ65-FTteY8a0rY7nJ7DU5caaxpmnrMWc/edit?usp=sharing' }, 
    ],

    sidebar: [
      {
        text: 'Advanced Linux Programming',
        collapsed: false,
        items: [
          { text: 'Module 01', link: '/alp/modules/module-1/module-1' },
          { text: 'Module 02', link: '/alp/modules/module-2/module-2' },
          { text: 'Module 03', link: '/alp/modules/module-3/module-3' },
          { text: 'Module 04', link: '/alp/modules/module-4/module-4' },
          { text: 'Module 05', link: '/alp/modules/module-5/module-5' },
        ],
      },
      {
        text: 'Advanced Linux Programming Lab',
        collapsed: true,
        items: [
          { text: 'Experiment 01', link: '/alplab/exp-1' },
          { text: 'Experiment 02', link: '/alplab/exp-2' },
          { text: 'Experiment 03', link: '/alplab/exp-3' },
          { text: 'Experiment 04', link: '/alplab/exp-4' },
          { text: 'Experiment 05', link: '/alplab/exp-5' },
          { text: 'Experiment 06', link: '/alplab/exp-6' },
          { text: 'Experiment 07', link: '/alplab/exp-7' },
          { text: 'Experiment 08', link: '/alplab/exp-8' },
          { text: 'Experiment 09', link: '/alplab/exp-9' },
          { text: 'Experiment 10', link: '/alplab/exp-10' },
          { text: 'Experiment 11', link: '/alplab/exp-11' },
          { text: 'Experiment 12', link: '/alplab/exp-12' },
          { text: 'Experiment 13', link: '/alplab/exp-13' },
          { text: 'Experiment 14', link: '/alplab/exp-14' },
          { text: 'Experiment 15', link: '/alplab/exp-15' },
          { text: 'Experiment 16', link: '/alplab/exp-16' },
          { text: 'Experiment 17', link: '/alplab/exp-17' },
          { text: 'Experiment 18', link: '/alplab/exp-18' },
          { text: 'Experiment 19', link: '/alplab/exp-19' },
          { text: 'Experiment 20', link: '/alplab/exp-20' },
          { text: 'Experiment 21', link: '/alplab/exp-21' },
          { text: 'Experiment 22', link: '/alplab/exp-22' },
          { text: 'Experiment 23', link: '/alplab/exp-23' },
          { text: 'Experiment 24', link: '/alplab/exp-24' },
          { text: 'Experiment 25', link: '/alplab/exp-25' },
          { text: 'Experiment 26', link: '/alplab/exp-26' },
          { text: 'Experiment 27', link: '/alplab/exp-27' },
        ],
      },
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/kuntalojha' },
      { icon: 'linkedin', link: 'https://www.linkedin.com/in/mrkuntalojha/' },
      // { icon: 'twitter', link: 'https://x.com/kuntalojha' },
      // { icon: 'youtube', link: 'https://www.youtube.com/@kuntalojhadev' },
    ],

    footer: {
      message: 'Released under the MIT License.',
      copyright: 'Copyright © 2025 <a href="https://www.linkedin.com/in/mrkuntalojha/" target="_blank" rel="noopener noreferrer">Kuntal Ojha</a>',
    },
  },
});
